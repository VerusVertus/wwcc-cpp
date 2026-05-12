/*
Program:        Playlist Manager
Date Created:   20260509
Author:         Trevor Moses
Purpose:        A playlist manager that stores and organizes song data
*/

/*
Creates an array of 5 Song structs and populates them with user input
After all songs are entered, displays the full playlist
Calculates and displays the total playlist runtime (formatted as minutes and seconds)
Identifies and displays the longest song
Prompts the user to enter an artist name and displays all songs by that artist
Prompts the user to enter a genre and displays all songs matching that genre
*/


#include <iostream>   // cout, cin, endl
#include <string>     // string, getline, to_string
#include <cctype>     // tolower
 
using namespace std;
 

// Artist struct - represents a song's artist
struct Artist {
    string name;
    string hometown;
};
 
// Song struct - contains a nested Artist
struct Song {
    string title;
    Artist artist;
    string genre;
    int durationSeconds;
};
 
// Helper function: converts seconds to "M:SS" format
// Example: 354 -> "5:54"
string formatDuration(int seconds) {
    int minutes = seconds / 60;
    int remainingSeconds = seconds % 60;
 
    string result = to_string(minutes) + ":";
    // Pad single-digit seconds with a leading zero
    if (remainingSeconds < 10) {
        result += "0";
    }
    result += to_string(remainingSeconds);
    return result;
}
 
// Helper function: converts a string to lowercase for case-insensitive comparison
string toLower(const string& str) {
    string result = str;
    for (size_t i = 0; i < result.length(); i++) {
        result[i] = tolower(result[i]);
    }
    return result;
}
 
// Display a single song's details (uses const reference to avoid copying)
void displaySong(const Song& song, int number) {
    cout << number << ". " << song.title << endl;
    cout << "   Artist: " << song.artist.name
         << " (" << song.artist.hometown << ")" << endl;
    cout << "   Genre: " << song.genre << endl;
    cout << "   Duration: " << formatDuration(song.durationSeconds) << endl;
    cout << endl;
}
 
// Display the full playlist with header
void displayPlaylist(const Song playlist[], int numSongs) {
    cout << "YOUR PLAYLIST:" << endl;
    cout << "--------------" << endl;
    for (int i = 0; i < numSongs; i++) {
        displaySong(playlist[i], i + 1);
    }
}
 
int main() {
    const int NUM_SONGS = 5;
    Song playlist[NUM_SONGS];
 
    cout << "PERSONAL PLAYLIST MANAGER" << endl;
    cout << "--------------------------" << endl;
 
    // Collect input for each song
    for (int i = 0; i < NUM_SONGS; i++) {
        cout << "Enter information for Song " << (i + 1) << ":" << endl;
 
        cout << "  Title: ";
        getline(cin, playlist[i].title);
 
        cout << "  Artist name: ";
        getline(cin, playlist[i].artist.name);
 
        cout << "  Artist hometown: ";
        getline(cin, playlist[i].artist.hometown);
 
        cout << "  Genre: ";
        getline(cin, playlist[i].genre);
 
        cout << "  Duration (seconds): ";
        cin >> playlist[i].durationSeconds;
        cin.ignore();  // Clear the newline left in the buffer
 
        cout << endl;
    }
 
    // Display the full playlist
    displayPlaylist(playlist, NUM_SONGS);
 
    // Calculate total runtime and find longest song
    int totalSeconds = 0;
    int longestIndex = 0;
    for (int i = 0; i < NUM_SONGS; i++) {
        totalSeconds += playlist[i].durationSeconds;
        if (playlist[i].durationSeconds > playlist[longestIndex].durationSeconds) {
            longestIndex = i;
        }
    }
 
    cout << "Playlist Stats:" << endl;
    cout << "  Total runtime: " << formatDuration(totalSeconds) << endl;
    cout << "  Longest song:  " << playlist[longestIndex].title
         << " (" << formatDuration(playlist[longestIndex].durationSeconds) << ")" << endl;
    cout << endl;
 
    // Search by artist (case-insensitive)
    string artistSearch;
    cout << "Search by artist: ";
    getline(cin, artistSearch);
 
    cout << "Songs by " << artistSearch << ":" << endl;
    bool found = false;
    string artistSearchLower = toLower(artistSearch);
    for (int i = 0; i < NUM_SONGS; i++) {
        if (toLower(playlist[i].artist.name) == artistSearchLower) {
            cout << "  - " << playlist[i].title
                 << " (" << formatDuration(playlist[i].durationSeconds) << ")" << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "  No songs found by that artist." << endl;
    }
    cout << endl;
 
    // Search by genre (case-insensitive)
    string genreSearch;
    cout << "Search by genre: ";
    getline(cin, genreSearch);
 
    cout << "Songs in genre \"" << genreSearch << "\":" << endl;
    found = false;
    string genreSearchLower = toLower(genreSearch);
    for (int i = 0; i < NUM_SONGS; i++) {
        if (toLower(playlist[i].genre) == genreSearchLower) {
            cout << "  - " << playlist[i].title
                 << " (" << formatDuration(playlist[i].durationSeconds) << ")" << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "  No songs found in that genre." << endl;
    }
 
    return 0;
}

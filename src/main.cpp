#include <iostream>

int main() {
    std::cout << "Hello World" << std::endl;

    struct WavHeader {
        std::string RIFF; // 1-4
        int fileSize; // 5-8
        std::string fileType; // 9-12
        std::string formatChunkMarker; // 13-16
        int formatLength; // 17-20
        int formatType; // 21-22
        int noChannels; // 23-24
        int sampleRate; // 25-28
        int byteRate; // 29-32
        int blockAlign; // 33-34
        int bitsPerSample; // 35-36
        int subChunk2ID; // 37-40
        int subChunk2Size; // 41-44
    }

    return 0;
}

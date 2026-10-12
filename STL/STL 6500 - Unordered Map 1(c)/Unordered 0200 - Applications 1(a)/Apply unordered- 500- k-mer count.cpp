#include <iostream>
#include <unordered_map>
#include <map>
#include <chrono>
#include <random>
#include <iomanip>
#include <algorithm>
using namespace std ;



int main() {
    string dna_sequence = "agtttcgcgcgcatataatgcggaaagcgccgcggagagtttctctcctagagagagaagagagttagaga";


    unordered_map<string, int> kmer_count;   // 3-mer를 저장할 unordered_map

    // k=3, k-mer 개수 세기
    for (size_t i = 0; i <= dna_sequence.length() - 3; ++i) {
        string kmer = dna_sequence.substr(i, 3);
        kmer_count[kmer]++;
    }

    // 결과 출력
    cout << "DNA 서열: " << dna_sequence << endl;
    cout << "서열 길이: " << dna_sequence.length() << endl;
    cout << "총 3-mer 개수: " << (dna_sequence.length() - 2) << endl;
    cout << "고유 3-mer 종류: " << kmer_count.size() << endl;
    cout << "\n=== 3-mer 빈도수 ===" << endl;

    // 빈도수 기준으로 정렬하여 출력
    vector<pair<string, int>> sorted_kmers(kmer_count.begin(), kmer_count.end());
    sort(sorted_kmers.begin(), sorted_kmers.end(),
              [](const auto& a, const auto& b) {
                  return a.second > b.second; // 빈도수 내림차순
              });

    for (const auto& pair : sorted_kmers) {
        cout << setw(5) << pair.first << ": "
                  << setw(2) << pair.second << "회" << endl;
    }

    // 가장 빈도가 높은 3-mer 찾기
    if (!sorted_kmers.empty()) {
        cout << "\n가장 빈도가 높은 3-mer: " << sorted_kmers[0].first
                  << " (" << sorted_kmers[0].second << "회)" << endl;
    }

    return 0;
}

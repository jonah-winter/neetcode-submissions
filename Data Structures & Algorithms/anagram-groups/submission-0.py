class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        fin = defaultdict(list)
        for s in strs:
            cnt = 26 * [0]
            for c in s:
                cnt[ord(c) - ord("a")] += 1
            fin[tuple(cnt)].append(s)
        return list(fin.values())
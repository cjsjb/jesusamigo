\context ChordNames	\chords {
	\set majorSevenSymbol = \markup { "maj7" }
	\set instrumentName = #"Capo 2"
	\set chordNameFunction = #parenthesis-ignatzek-chord-names
	\jesusamigoacordes
}

\context ChordNames	\chords {
	\set majorSevenSymbol = \markup { "maj7" }
	\transpose a b { \jesusamigoacordes }
}

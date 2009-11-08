\context Staff = "violín" << 
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo
	\context Voice = "voice 3" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key a \minor

		% intro
		r8 c'' b' c''  |
		e'' 8 c'' b' a'  |
		r8 c'' b' c''  |
		e'' 2  |

		R2*42  |

		% interludio
		r4 r8 r16 c'' 32 b'  |
		c'' 4 ~ c'' 8. b' 32 a'  |
		b' 4 ~ b' 8 c'' 16 b'  |
		%% 50
		a' 4 ~ a' 16 b' c'' b' 32 c''  |
		a' 4 ~ a' 8. b' 32 a'  |
		g' 8 a' b' d''  |
		d'' 4 ~ d'' 8. c'' 32 b'  |
		a' 2  |
		%% 55
		R2  |

	} % Voice
 >> % Staff ends


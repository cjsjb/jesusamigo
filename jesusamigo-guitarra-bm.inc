\new StaffGroup = "guitarra" << 
	%\set Staff.instrumentName = "Guitarra"
	%\set Staff.shortInstrumentName = "G."
	%\set Score.skipBars = ##t
	%\set Staff.printKeyCancellation = ##f
	%\new Voice \global
	%\new Voice \globalTempo
	%\context Voice = "voice 6" {
	\new Staff {
		\set Staff.instrumentName = "Guitarra"
		\set Staff.shortInstrumentName = "G."
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\transpose a b {

		\clef "treble_8"
		\key a \minor

		\jesusamigoguitarraintro
		R2*84  |
		\bar "|."
		}
	} % Voice
	\new TabStaff {
		\override Stem #'transparent = ##t
		\override Stem #'length = #0
		\set autoBeaming = ##f
		\override Staff.Rest #'break-visibility = #all-invisible

		\jesusamigoguitarraintro
		\break
	}
>> % Staff ends

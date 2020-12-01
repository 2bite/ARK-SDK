#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ExplorerNoteXPSpecial_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ExplorerNoteXPSpecial.Buff_ExplorerNoteXPSpecial_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_ExplorerNoteXPSpecial_C : public ABuff_ExplorerNoteXP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ExplorerNoteXPSpecial.Buff_ExplorerNoteXPSpecial_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ExplorerNoteXPSpecial(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

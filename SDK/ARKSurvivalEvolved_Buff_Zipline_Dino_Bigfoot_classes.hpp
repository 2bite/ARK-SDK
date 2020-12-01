#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Zipline_Dino_Bigfoot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Zipline_Dino_Bigfoot.Buff_Zipline_Dino_Bigfoot_C
// 0x0000 (0x0D20 - 0x0D20)
class ABuff_Zipline_Dino_Bigfoot_C : public ABuff_Zipline_DinoBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Zipline_Dino_Bigfoot.Buff_Zipline_Dino_Bigfoot_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Zipline_Dino_Bigfoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

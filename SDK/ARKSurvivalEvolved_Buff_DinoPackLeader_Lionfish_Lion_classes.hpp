#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoPackLeader_Lionfish_Lion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DinoPackLeader_Lionfish_Lion.Buff_DinoPackLeader_Lionfish_Lion_C
// 0x0000 (0x0A40 - 0x0A40)
class ABuff_DinoPackLeader_Lionfish_Lion_C : public ABuff_DinoPackLeader_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DinoPackLeader_Lionfish_Lion.Buff_DinoPackLeader_Lionfish_Lion_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_DinoPackLeader_Lionfish_Lion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

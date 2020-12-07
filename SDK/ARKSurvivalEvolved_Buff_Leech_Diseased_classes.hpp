#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Leech_Diseased_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Leech_Diseased.Buff_Leech_Diseased_C
// 0x0000 (0x09D0 - 0x09D0)
class ABuff_Leech_Diseased_C : public ABuff_Leech_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Leech_Diseased.Buff_Leech_Diseased_C");
		return ptr;
	}


	void BPSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Leech_Diseased(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

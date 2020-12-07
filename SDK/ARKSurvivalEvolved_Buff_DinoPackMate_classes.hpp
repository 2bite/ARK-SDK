#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoPackMate_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DinoPackMate.Buff_DinoPackMate_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_DinoPackMate_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DinoPackMate.Buff_DinoPackMate_C");
		return ptr;
	}


	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_DinoPackMate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

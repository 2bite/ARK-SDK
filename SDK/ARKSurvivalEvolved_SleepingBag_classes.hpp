#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SleepingBag_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SleepingBag.SleepingBag_C
// 0x0000 (0x0F50 - 0x0F50)
class ASleepingBag_C : public ABedBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SleepingBag.SleepingBag_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SleepingBag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

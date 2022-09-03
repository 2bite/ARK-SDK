#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_IsBeingCarried_AllowUnconscious_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_IsBeingCarried_AllowUnconscious.Buff_IsBeingCarried_AllowUnconscious_C
// 0x0000 (0x0985 - 0x0985)
class ABuff_IsBeingCarried_AllowUnconscious_C : public ABuff_IsBeingCarried_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_IsBeingCarried_AllowUnconscious.Buff_IsBeingCarried_AllowUnconscious_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_IsBeingCarried_AllowUnconscious(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

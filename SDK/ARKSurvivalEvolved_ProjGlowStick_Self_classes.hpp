#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGlowStick_Self_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjGlowStick_Self.ProjGlowStick_Self_C
// 0x0004 (0x0724 - 0x0720)
class AProjGlowStick_Self_C : public AProjGlowStick_C
{
public:
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x0720(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjGlowStick_Self.ProjGlowStick_Self_C");
		return ptr;
	}


	void GetGlowstickOwner(class AActor** glowstickOwner);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ProjGlowStick_Self(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

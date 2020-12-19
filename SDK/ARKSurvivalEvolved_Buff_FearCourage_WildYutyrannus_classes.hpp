#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FearCourage_WildYutyrannus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FearCourage_WildYutyrannus.Buff_FearCourage_WildYutyrannus_C
// 0x0000 (0x0EA0 - 0x0EA0)
class ABuff_FearCourage_WildYutyrannus_C : public ABuff_FearCourage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FearCourage_WildYutyrannus.Buff_FearCourage_WildYutyrannus_C");
		return ptr;
	}


	void DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_FearCourage_WildYutyrannus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

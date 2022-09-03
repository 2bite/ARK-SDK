#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Keypad2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Keypad2.Keypad2_C
// 0x0010 (0x0E28 - 0x0E18)
class AKeypad2_C : public APrimalStructureKeypad
{
public:
	class UPrimalInventoryBP_Light_Base_C*             PrimalInventoryBP_Light_Base_C1;                          // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Keypad2.Keypad2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Keypad2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

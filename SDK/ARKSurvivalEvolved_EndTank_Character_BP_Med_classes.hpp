#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndTank_Character_BP_Med_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndTank_Character_BP_Med.EndTank_Character_BP_Med_C
// 0x0008 (0x2228 - 0x2220)
class AEndTank_Character_BP_Med_C : public AEndTank_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_EndTank_Med_C* DinoCharacterStatus_BP_EndTank_Med_C1;                    // 0x2220(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndTank_Character_BP_Med.EndTank_Character_BP_Med_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EndTank_Character_BP_Med(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

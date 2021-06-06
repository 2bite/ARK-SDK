#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Purlovia_Character_BP_Polar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Purlovia_Character_BP_Polar.Purlovia_Character_BP_Polar_C
// 0x0008 (0x2A60 - 0x2A58)
class APurlovia_Character_BP_Polar_C : public APurlovia_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Purlovia_Polar_C* DinoCharacterStatus_BP_Purlovia_Polar_C1;                 // 0x2A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Purlovia_Character_BP_Polar.Purlovia_Character_BP_Polar_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Purlovia_Character_BP_Polar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

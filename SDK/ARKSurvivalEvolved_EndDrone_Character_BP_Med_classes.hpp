#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndDrone_Character_BP_Med_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndDrone_Character_BP_Med.EndDrone_Character_BP_Med_C
// 0x000C (0x2270 - 0x2264)
class AEndDrone_Character_BP_Med_C : public AEndDrone_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x2264(0x0004) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Drone_Med_C* DinoCharacterStatus_BP_Drone_Med_C1;                      // 0x2268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndDrone_Character_BP_Med.EndDrone_Character_BP_Med_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EndDrone_Character_BP_Med(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

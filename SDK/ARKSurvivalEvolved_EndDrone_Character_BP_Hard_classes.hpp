#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndDrone_Character_BP_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndDrone_Character_BP_Hard.EndDrone_Character_BP_Hard_C
// 0x000C (0x2270 - 0x2264)
class AEndDrone_Character_BP_Hard_C : public AEndDrone_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x2264(0x0004) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Drone_Hard_C* DinoCharacterStatus_BP_Drone_Hard_C1;                     // 0x2268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndDrone_Character_BP_Hard.EndDrone_Character_BP_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EndDrone_Character_BP_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

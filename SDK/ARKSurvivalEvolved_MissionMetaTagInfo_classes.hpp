#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionMetaTagInfo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionMetaTagInfo.MissionMetaTagInfo_C
// 0x0000 (0x00B0 - 0x00B0)
class UMissionMetaTagInfo_C : public UMissionMetaTagInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionMetaTagInfo.MissionMetaTagInfo_C");
		return ptr;
	}


	void ExecuteUbergraph_MissionMetaTagInfo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

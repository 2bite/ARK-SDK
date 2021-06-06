// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionMetaTagInfo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionMetaTagInfo.MissionMetaTagInfo_C.ExecuteUbergraph_MissionMetaTagInfo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMissionMetaTagInfo_C::ExecuteUbergraph_MissionMetaTagInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionMetaTagInfo.MissionMetaTagInfo_C.ExecuteUbergraph_MissionMetaTagInfo");

	UMissionMetaTagInfo_C_ExecuteUbergraph_MissionMetaTagInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

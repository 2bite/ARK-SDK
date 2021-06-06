// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionModule_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionModule_Base.MissionModule_Base_C.ExecuteUbergraph_MissionModule_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMissionModule_Base_C::ExecuteUbergraph_MissionModule_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionModule_Base.MissionModule_Base_C.ExecuteUbergraph_MissionModule_Base");

	UMissionModule_Base_C_ExecuteUbergraph_MissionModule_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

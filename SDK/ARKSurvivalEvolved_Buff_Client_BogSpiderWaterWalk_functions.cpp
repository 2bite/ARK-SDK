// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Client_BogSpiderWaterWalk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Client_BogSpiderWaterWalk.Buff_Client_BogSpiderWaterWalk_C.UserConstructionScript
// ()

void ABuff_Client_BogSpiderWaterWalk_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Client_BogSpiderWaterWalk.Buff_Client_BogSpiderWaterWalk_C.UserConstructionScript");

	ABuff_Client_BogSpiderWaterWalk_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Client_BogSpiderWaterWalk.Buff_Client_BogSpiderWaterWalk_C.ExecuteUbergraph_Buff_Client_BogSpiderWaterWalk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Client_BogSpiderWaterWalk_C::ExecuteUbergraph_Buff_Client_BogSpiderWaterWalk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Client_BogSpiderWaterWalk.Buff_Client_BogSpiderWaterWalk_C.ExecuteUbergraph_Buff_Client_BogSpiderWaterWalk");

	ABuff_Client_BogSpiderWaterWalk_C_ExecuteUbergraph_Buff_Client_BogSpiderWaterWalk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

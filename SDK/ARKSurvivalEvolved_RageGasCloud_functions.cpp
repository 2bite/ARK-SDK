// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RageGasCloud_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RageGasCloud.RageGasCloud_C.UserConstructionScript
// ()

void ARageGasCloud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RageGasCloud.RageGasCloud_C.UserConstructionScript");

	ARageGasCloud_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RageGasCloud.RageGasCloud_C.ExecuteUbergraph_RageGasCloud
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARageGasCloud_C::ExecuteUbergraph_RageGasCloud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RageGasCloud.RageGasCloud_C.ExecuteUbergraph_RageGasCloud");

	ARageGasCloud_C_ExecuteUbergraph_RageGasCloud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

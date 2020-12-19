// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CableBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CableBaseBP.CableBaseBP_C.UserConstructionScript
// ()

void ACableBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CableBaseBP.CableBaseBP_C.UserConstructionScript");

	ACableBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CableBaseBP.CableBaseBP_C.ExecuteUbergraph_CableBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACableBaseBP_C::ExecuteUbergraph_CableBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CableBaseBP.CableBaseBP_C.ExecuteUbergraph_CableBaseBP");

	ACableBaseBP_C_ExecuteUbergraph_CableBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

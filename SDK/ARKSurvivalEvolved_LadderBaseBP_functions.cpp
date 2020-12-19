// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LadderBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LadderBaseBP.LadderBaseBP_C.UserConstructionScript
// ()

void ALadderBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LadderBaseBP.LadderBaseBP_C.UserConstructionScript");

	ALadderBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LadderBaseBP.LadderBaseBP_C.ExecuteUbergraph_LadderBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALadderBaseBP_C::ExecuteUbergraph_LadderBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LadderBaseBP.LadderBaseBP_C.ExecuteUbergraph_LadderBaseBP");

	ALadderBaseBP_C_ExecuteUbergraph_LadderBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

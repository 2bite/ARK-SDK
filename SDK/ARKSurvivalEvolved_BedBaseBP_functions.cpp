// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BedBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BedBaseBP.BedBaseBP_C.UserConstructionScript
// ()

void ABedBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedBaseBP.BedBaseBP_C.UserConstructionScript");

	ABedBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedBaseBP.BedBaseBP_C.ExecuteUbergraph_BedBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABedBaseBP_C::ExecuteUbergraph_BedBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedBaseBP.BedBaseBP_C.ExecuteUbergraph_BedBaseBP");

	ABedBaseBP_C_ExecuteUbergraph_BedBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

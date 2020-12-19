// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Global_PostProcess_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Global_PostProcess_Blueprint.Global_PostProcess_Blueprint_C.UserConstructionScript
// ()

void AGlobal_PostProcess_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Global_PostProcess_Blueprint.Global_PostProcess_Blueprint_C.UserConstructionScript");

	AGlobal_PostProcess_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Global_PostProcess_Blueprint.Global_PostProcess_Blueprint_C.ExecuteUbergraph_Global_PostProcess_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGlobal_PostProcess_Blueprint_C::ExecuteUbergraph_Global_PostProcess_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Global_PostProcess_Blueprint.Global_PostProcess_Blueprint_C.ExecuteUbergraph_Global_PostProcess_Blueprint");

	AGlobal_PostProcess_Blueprint_C_ExecuteUbergraph_Global_PostProcess_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

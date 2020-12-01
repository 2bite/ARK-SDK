// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_MeteorEX_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MeteorEX.BP_MeteorEX_C.UserConstructionScript
// ()

void ABP_MeteorEX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeteorEX.BP_MeteorEX_C.UserConstructionScript");

	ABP_MeteorEX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MeteorEX.BP_MeteorEX_C.ExecuteUbergraph_BP_MeteorEX
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MeteorEX_C::ExecuteUbergraph_BP_MeteorEX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeteorEX.BP_MeteorEX_C.ExecuteUbergraph_BP_MeteorEX");

	ABP_MeteorEX_C_ExecuteUbergraph_BP_MeteorEX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

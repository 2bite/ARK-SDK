// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_ProtoArkDome_Snow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProtoArkDome_Snow.BP_ProtoArkDome_Snow_C.UserConstructionScript
// ()

void ABP_ProtoArkDome_Snow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProtoArkDome_Snow.BP_ProtoArkDome_Snow_C.UserConstructionScript");

	ABP_ProtoArkDome_Snow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProtoArkDome_Snow.BP_ProtoArkDome_Snow_C.ExecuteUbergraph_BP_ProtoArkDome_Snow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProtoArkDome_Snow_C::ExecuteUbergraph_BP_ProtoArkDome_Snow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProtoArkDome_Snow.BP_ProtoArkDome_Snow_C.ExecuteUbergraph_BP_ProtoArkDome_Snow");

	ABP_ProtoArkDome_Snow_C_ExecuteUbergraph_BP_ProtoArkDome_Snow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IndustrialForge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IndustrialForge.IndustrialForge_C.UserConstructionScript
// ()

void AIndustrialForge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndustrialForge.IndustrialForge_C.UserConstructionScript");

	AIndustrialForge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IndustrialForge.IndustrialForge_C.ExecuteUbergraph_IndustrialForge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIndustrialForge_C::ExecuteUbergraph_IndustrialForge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndustrialForge.IndustrialForge_C.ExecuteUbergraph_IndustrialForge");

	AIndustrialForge_C_ExecuteUbergraph_IndustrialForge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IndustrialForgeEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IndustrialForgeEmitter.IndustrialForgeEmitter_C.UserConstructionScript
// ()

void AIndustrialForgeEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndustrialForgeEmitter.IndustrialForgeEmitter_C.UserConstructionScript");

	AIndustrialForgeEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IndustrialForgeEmitter.IndustrialForgeEmitter_C.ExecuteUbergraph_IndustrialForgeEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIndustrialForgeEmitter_C::ExecuteUbergraph_IndustrialForgeEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndustrialForgeEmitter.IndustrialForgeEmitter_C.ExecuteUbergraph_IndustrialForgeEmitter");

	AIndustrialForgeEmitter_C_ExecuteUbergraph_IndustrialForgeEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

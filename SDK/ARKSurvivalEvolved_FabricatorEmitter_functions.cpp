// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FabricatorEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FabricatorEmitter.FabricatorEmitter_C.UserConstructionScript
// ()

void AFabricatorEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FabricatorEmitter.FabricatorEmitter_C.UserConstructionScript");

	AFabricatorEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FabricatorEmitter.FabricatorEmitter_C.ExecuteUbergraph_FabricatorEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFabricatorEmitter_C::ExecuteUbergraph_FabricatorEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FabricatorEmitter.FabricatorEmitter_C.ExecuteUbergraph_FabricatorEmitter");

	AFabricatorEmitter_C_ExecuteUbergraph_FabricatorEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

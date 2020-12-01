// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StoneWaterTapEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StoneWaterTapEmitter.StoneWaterTapEmitter_C.UserConstructionScript
// ()

void AStoneWaterTapEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoneWaterTapEmitter.StoneWaterTapEmitter_C.UserConstructionScript");

	AStoneWaterTapEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoneWaterTapEmitter.StoneWaterTapEmitter_C.ExecuteUbergraph_StoneWaterTapEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStoneWaterTapEmitter_C::ExecuteUbergraph_StoneWaterTapEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoneWaterTapEmitter.StoneWaterTapEmitter_C.ExecuteUbergraph_StoneWaterTapEmitter");

	AStoneWaterTapEmitter_C_ExecuteUbergraph_StoneWaterTapEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

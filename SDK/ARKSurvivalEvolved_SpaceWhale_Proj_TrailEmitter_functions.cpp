// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceWhale_Proj_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpaceWhale_Proj_TrailEmitter.SpaceWhale_Proj_TrailEmitter_C.UserConstructionScript
// ()

void ASpaceWhale_Proj_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Proj_TrailEmitter.SpaceWhale_Proj_TrailEmitter_C.UserConstructionScript");

	ASpaceWhale_Proj_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Proj_TrailEmitter.SpaceWhale_Proj_TrailEmitter_C.ExecuteUbergraph_SpaceWhale_Proj_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Proj_TrailEmitter_C::ExecuteUbergraph_SpaceWhale_Proj_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Proj_TrailEmitter.SpaceWhale_Proj_TrailEmitter_C.ExecuteUbergraph_SpaceWhale_Proj_TrailEmitter");

	ASpaceWhale_Proj_TrailEmitter_C_ExecuteUbergraph_SpaceWhale_Proj_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

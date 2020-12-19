// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Proj_SpearSkin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_SpearSkin.Proj_SpearSkin_C.UserConstructionScript
// ()

void AProj_SpearSkin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SpearSkin.Proj_SpearSkin_C.UserConstructionScript");

	AProj_SpearSkin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SpearSkin.Proj_SpearSkin_C.ExecuteUbergraph_Proj_SpearSkin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProj_SpearSkin_C::ExecuteUbergraph_Proj_SpearSkin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SpearSkin.Proj_SpearSkin_C.ExecuteUbergraph_Proj_SpearSkin");

	AProj_SpearSkin_C_ExecuteUbergraph_Proj_SpearSkin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

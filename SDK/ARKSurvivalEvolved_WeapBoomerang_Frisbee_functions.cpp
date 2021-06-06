// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBoomerang_Frisbee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapBoomerang_Frisbee.WeapBoomerang_Frisbee_C.UserConstructionScript
// ()

void AWeapBoomerang_Frisbee_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBoomerang_Frisbee.WeapBoomerang_Frisbee_C.UserConstructionScript");

	AWeapBoomerang_Frisbee_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBoomerang_Frisbee.WeapBoomerang_Frisbee_C.ExecuteUbergraph_WeapBoomerang_Frisbee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapBoomerang_Frisbee_C::ExecuteUbergraph_WeapBoomerang_Frisbee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBoomerang_Frisbee.WeapBoomerang_Frisbee_C.ExecuteUbergraph_WeapBoomerang_Frisbee");

	AWeapBoomerang_Frisbee_C_ExecuteUbergraph_WeapBoomerang_Frisbee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

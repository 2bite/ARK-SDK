// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBow_Tranq_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapBow_Tranq.WeapBow_Tranq_C.UserConstructionScript
// ()

void AWeapBow_Tranq_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBow_Tranq.WeapBow_Tranq_C.UserConstructionScript");

	AWeapBow_Tranq_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBow_Tranq.WeapBow_Tranq_C.ExecuteUbergraph_WeapBow_Tranq
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapBow_Tranq_C::ExecuteUbergraph_WeapBow_Tranq(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBow_Tranq.WeapBow_Tranq_C.ExecuteUbergraph_WeapBow_Tranq");

	AWeapBow_Tranq_C_ExecuteUbergraph_WeapBow_Tranq_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

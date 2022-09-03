// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCompoundBow_Tranq_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapCompoundBow_Tranq.WeapCompoundBow_Tranq_C.UserConstructionScript
// ()

void AWeapCompoundBow_Tranq_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCompoundBow_Tranq.WeapCompoundBow_Tranq_C.UserConstructionScript");

	AWeapCompoundBow_Tranq_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCompoundBow_Tranq.WeapCompoundBow_Tranq_C.ExecuteUbergraph_WeapCompoundBow_Tranq
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCompoundBow_Tranq_C::ExecuteUbergraph_WeapCompoundBow_Tranq(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCompoundBow_Tranq.WeapCompoundBow_Tranq_C.ExecuteUbergraph_WeapCompoundBow_Tranq");

	AWeapCompoundBow_Tranq_C_ExecuteUbergraph_WeapCompoundBow_Tranq_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCrossbow_Tranq_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapCrossbow_Tranq.WeapCrossbow_Tranq_C.UserConstructionScript
// ()

void AWeapCrossbow_Tranq_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Tranq.WeapCrossbow_Tranq_C.UserConstructionScript");

	AWeapCrossbow_Tranq_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_Tranq.WeapCrossbow_Tranq_C.ExecuteUbergraph_WeapCrossbow_Tranq
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCrossbow_Tranq_C::ExecuteUbergraph_WeapCrossbow_Tranq(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Tranq.WeapCrossbow_Tranq_C.ExecuteUbergraph_WeapCrossbow_Tranq");

	AWeapCrossbow_Tranq_C_ExecuteUbergraph_WeapCrossbow_Tranq_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

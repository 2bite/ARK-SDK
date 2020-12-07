// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSparkler_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSparkler.WeapSparkler_C.UserConstructionScript
// ()

void AWeapSparkler_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSparkler.WeapSparkler_C.UserConstructionScript");

	AWeapSparkler_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSparkler.WeapSparkler_C.ExecuteUbergraph_WeapSparkler
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSparkler_C::ExecuteUbergraph_WeapSparkler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSparkler.WeapSparkler_C.ExecuteUbergraph_WeapSparkler");

	AWeapSparkler_C_ExecuteUbergraph_WeapSparkler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

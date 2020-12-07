// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSlingshot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSlingshot.WeapSlingshot_C.UserConstructionScript
// ()

void AWeapSlingshot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSlingshot.WeapSlingshot_C.UserConstructionScript");

	AWeapSlingshot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSlingshot.WeapSlingshot_C.ExecuteUbergraph_WeapSlingshot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSlingshot_C::ExecuteUbergraph_WeapSlingshot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSlingshot.WeapSlingshot_C.ExecuteUbergraph_WeapSlingshot");

	AWeapSlingshot_C_ExecuteUbergraph_WeapSlingshot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

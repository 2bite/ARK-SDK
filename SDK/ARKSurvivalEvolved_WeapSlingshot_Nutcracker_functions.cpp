// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSlingshot_Nutcracker_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSlingshot_Nutcracker.WeapSlingshot_Nutcracker_C.UserConstructionScript
// ()

void AWeapSlingshot_Nutcracker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSlingshot_Nutcracker.WeapSlingshot_Nutcracker_C.UserConstructionScript");

	AWeapSlingshot_Nutcracker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSlingshot_Nutcracker.WeapSlingshot_Nutcracker_C.ExecuteUbergraph_WeapSlingshot_Nutcracker
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSlingshot_Nutcracker_C::ExecuteUbergraph_WeapSlingshot_Nutcracker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSlingshot_Nutcracker.WeapSlingshot_Nutcracker_C.ExecuteUbergraph_WeapSlingshot_Nutcracker");

	AWeapSlingshot_Nutcracker_C_ExecuteUbergraph_WeapSlingshot_Nutcracker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

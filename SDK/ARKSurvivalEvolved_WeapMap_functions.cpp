// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMap.WeapMap_C.UserConstructionScript
// ()

void AWeapMap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMap.WeapMap_C.UserConstructionScript");

	AWeapMap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMap.WeapMap_C.ExecuteUbergraph_WeapMap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMap_C::ExecuteUbergraph_WeapMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMap.WeapMap_C.ExecuteUbergraph_WeapMap");

	AWeapMap_C_ExecuteUbergraph_WeapMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Furniture_Snowman_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Furniture_Snowman.Furniture_Snowman_C.UserConstructionScript
// ()

void AFurniture_Snowman_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Furniture_Snowman.Furniture_Snowman_C.UserConstructionScript");

	AFurniture_Snowman_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Furniture_Snowman.Furniture_Snowman_C.ReceiveBeginPlay
// ()

void AFurniture_Snowman_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Furniture_Snowman.Furniture_Snowman_C.ReceiveBeginPlay");

	AFurniture_Snowman_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Furniture_Snowman.Furniture_Snowman_C.ExecuteUbergraph_Furniture_Snowman
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFurniture_Snowman_C::ExecuteUbergraph_Furniture_Snowman(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Furniture_Snowman.Furniture_Snowman_C.ExecuteUbergraph_Furniture_Snowman");

	AFurniture_Snowman_C_ExecuteUbergraph_Furniture_Snowman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

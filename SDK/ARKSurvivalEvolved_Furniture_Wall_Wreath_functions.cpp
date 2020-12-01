// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Furniture_Wall_Wreath_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Furniture_Wall_Wreath.Furniture_Wall_Wreath_C.UserConstructionScript
// ()

void AFurniture_Wall_Wreath_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Furniture_Wall_Wreath.Furniture_Wall_Wreath_C.UserConstructionScript");

	AFurniture_Wall_Wreath_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Furniture_Wall_Wreath.Furniture_Wall_Wreath_C.ReceiveBeginPlay
// ()

void AFurniture_Wall_Wreath_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Furniture_Wall_Wreath.Furniture_Wall_Wreath_C.ReceiveBeginPlay");

	AFurniture_Wall_Wreath_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Furniture_Wall_Wreath.Furniture_Wall_Wreath_C.ExecuteUbergraph_Furniture_Wall_Wreath
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFurniture_Wall_Wreath_C::ExecuteUbergraph_Furniture_Wall_Wreath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Furniture_Wall_Wreath.Furniture_Wall_Wreath_C.ExecuteUbergraph_Furniture_Wall_Wreath");

	AFurniture_Wall_Wreath_C_ExecuteUbergraph_Furniture_Wall_Wreath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

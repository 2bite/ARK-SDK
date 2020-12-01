// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Furniture_WallChain_XmasLights_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Furniture_WallChain_XmasLights.Furniture_WallChain_XmasLights_C.UserConstructionScript
// ()

void AFurniture_WallChain_XmasLights_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Furniture_WallChain_XmasLights.Furniture_WallChain_XmasLights_C.UserConstructionScript");

	AFurniture_WallChain_XmasLights_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Furniture_WallChain_XmasLights.Furniture_WallChain_XmasLights_C.ReceiveBeginPlay
// ()

void AFurniture_WallChain_XmasLights_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Furniture_WallChain_XmasLights.Furniture_WallChain_XmasLights_C.ReceiveBeginPlay");

	AFurniture_WallChain_XmasLights_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Furniture_WallChain_XmasLights.Furniture_WallChain_XmasLights_C.ExecuteUbergraph_Furniture_WallChain_XmasLights
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFurniture_WallChain_XmasLights_C::ExecuteUbergraph_Furniture_WallChain_XmasLights(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Furniture_WallChain_XmasLights.Furniture_WallChain_XmasLights_C.ExecuteUbergraph_Furniture_WallChain_XmasLights");

	AFurniture_WallChain_XmasLights_C_ExecuteUbergraph_Furniture_WallChain_XmasLights_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

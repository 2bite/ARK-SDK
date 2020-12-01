// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Cave1_Generic_SphereReflectionCapture_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cave1_Generic_SphereReflectionCapture_Blueprint.Cave1_Generic_SphereReflectionCapture_Blueprint_C.UserConstructionScript
// ()

void ACave1_Generic_SphereReflectionCapture_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cave1_Generic_SphereReflectionCapture_Blueprint.Cave1_Generic_SphereReflectionCapture_Blueprint_C.UserConstructionScript");

	ACave1_Generic_SphereReflectionCapture_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cave1_Generic_SphereReflectionCapture_Blueprint.Cave1_Generic_SphereReflectionCapture_Blueprint_C.ExecuteUbergraph_Cave1_Generic_SphereReflectionCapture_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACave1_Generic_SphereReflectionCapture_Blueprint_C::ExecuteUbergraph_Cave1_Generic_SphereReflectionCapture_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cave1_Generic_SphereReflectionCapture_Blueprint.Cave1_Generic_SphereReflectionCapture_Blueprint_C.ExecuteUbergraph_Cave1_Generic_SphereReflectionCapture_Blueprint");

	ACave1_Generic_SphereReflectionCapture_Blueprint_C_ExecuteUbergraph_Cave1_Generic_SphereReflectionCapture_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

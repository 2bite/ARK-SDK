// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_GemBio_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItemGeneric_GemBio.DroppedItemGeneric_GemBio_C.UserConstructionScript
// ()

void ADroppedItemGeneric_GemBio_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_GemBio.DroppedItemGeneric_GemBio_C.UserConstructionScript");

	ADroppedItemGeneric_GemBio_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_GemBio.DroppedItemGeneric_GemBio_C.ExecuteUbergraph_DroppedItemGeneric_GemBio
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemGeneric_GemBio_C::ExecuteUbergraph_DroppedItemGeneric_GemBio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_GemBio.DroppedItemGeneric_GemBio_C.ExecuteUbergraph_DroppedItemGeneric_GemBio");

	ADroppedItemGeneric_GemBio_C_ExecuteUbergraph_DroppedItemGeneric_GemBio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

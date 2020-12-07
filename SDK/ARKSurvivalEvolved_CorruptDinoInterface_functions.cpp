// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CorruptDinoInterface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CorruptDinoInterface.CorruptDinoInterface_C.SetSpawnLoc
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void UCorruptDinoInterface_C::SetSpawnLoc(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptDinoInterface.CorruptDinoInterface_C.SetSpawnLoc");

	UCorruptDinoInterface_C_SetSpawnLoc_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorruptDinoInterface.CorruptDinoInterface_C.Teleported
// ()

void UCorruptDinoInterface_C::Teleported()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptDinoInterface.CorruptDinoInterface_C.Teleported");

	UCorruptDinoInterface_C_Teleported_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

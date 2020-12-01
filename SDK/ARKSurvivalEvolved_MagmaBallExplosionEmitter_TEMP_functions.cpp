// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MagmaBallExplosionEmitter_TEMP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagmaBallExplosionEmitter_TEMP.MagmaBallExplosionEmitter_TEMP_C.UserConstructionScript
// ()

void AMagmaBallExplosionEmitter_TEMP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagmaBallExplosionEmitter_TEMP.MagmaBallExplosionEmitter_TEMP_C.UserConstructionScript");

	AMagmaBallExplosionEmitter_TEMP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagmaBallExplosionEmitter_TEMP.MagmaBallExplosionEmitter_TEMP_C.ExecuteUbergraph_MagmaBallExplosionEmitter_TEMP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMagmaBallExplosionEmitter_TEMP_C::ExecuteUbergraph_MagmaBallExplosionEmitter_TEMP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagmaBallExplosionEmitter_TEMP.MagmaBallExplosionEmitter_TEMP_C.ExecuteUbergraph_MagmaBallExplosionEmitter_TEMP");

	AMagmaBallExplosionEmitter_TEMP_C_ExecuteUbergraph_MagmaBallExplosionEmitter_TEMP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
